//
// Created by torup on 12/20/2025.
//

#include "Game.h"

Game::Game(): m_window(600, 600, "ParaBox"), m_shader("assets/shaders/vShader.vert", "assets/shaders/fShader.frag") {
init();
}

void Game::init() {
    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f
    };

    glGenVertexArrays(1, &m_vao);
    glBindVertexArray(m_vao);
    // Now we have our vertex Array object, which is the rule for the vertex drawing

    glGenBuffers(1, &m_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
    // Now we have pointed which is our vertex data using the m_vbo

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), nullptr);
    glEnableVertexAttribArray(0);
}



void Game::run() {
    const float FIXED_DT = 1.0f/60.0f;
    float accumulatedTime = 0.0f;
    double lastTime = glfwGetTime();
    while (!glfwWindowShouldClose(m_window.getWindow())) {
        double currentTime = glfwGetTime();
        float deltaTime = static_cast<float> (currentTime - lastTime);
        deltaTime = min(deltaTime, 0.1f);
        lastTime = currentTime;
        /*
        *   get real time
        *   accumulate time
        *   while enough time:
        *       fixedUpdate(FIXED_DT)
        *   update(frameTime)
        *   render()
        */
        while (accumulatedTime>=FIXED_DT) {
            fixedUpdate(FIXED_DT);
            accumulatedTime -= FIXED_DT;
        }
        glfwPollEvents();
        m_input.update(m_window.getWindow());

        update();
        render();


        glfwSwapBuffers(m_window.getWindow());
    }
}

void Game::fixedUpdate(float deltaTime) {
    cout<<"fixedUpdate"<<endl;
}

void Game::update() {
    m_window.processInput();
    if (m_input.pressed(GLFW_KEY_SPACE)) {
        cout << "Space pressed" << endl;
    }
    if (m_input.held(GLFW_KEY_SPACE)) {
        cout << "Space held" << endl;
    }
    if (m_input.released(GLFW_KEY_SPACE)) {
        cout << "Space relesed" << endl;
    }

}

void Game::render() {
    glClearColor(1.0f, 0.0f, 0.25, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    m_shader.use();

    // we have our data binded, and we have set the rule for strides too
    // we have to bind the vertex array again;
    glBindVertexArray(m_vao);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

Game::~Game() {
    glDeleteVertexArrays(1, &m_vao);
    glDeleteBuffers(1, &m_vbo);
}


