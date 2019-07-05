// Copyright (C) 2019 Vincent PALANCHER (nyibbang)
//
// This file is part of Astral.
//
// Astral is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Astral is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Astral.  If not, see <http://www.gnu.org/licenses/>.

#include "common_main.hpp"
#include <windows.h>


int CALLBACK WinMain(_In_ HINSTANCE hInstance, _In_ HINSTANCE hPrevInstance,
                     _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
  astral::gui::start();
  return EXIT_SUCCESS;
}
