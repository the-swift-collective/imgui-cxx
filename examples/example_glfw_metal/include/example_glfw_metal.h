#pragma once

#include "imgui.h"

enum class AppStatus {
  AppStatusSuccess = 0,
  AppStatusFailure = 1
};

AppStatus run_example(const ImGuiIO &io);
