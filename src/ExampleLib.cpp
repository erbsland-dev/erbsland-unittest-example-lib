// Copyright © 2023 Tobias Erbsland. Web: https://erbsland.dev
//
// This program is free software: you can redistribute it and/or modify it under the terms of the
// GNU Lesser General Public License as published by the Free Software Foundation, either
// version 3 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License along with this program.
// If not, see <https://www.gnu.org/licenses/>.
#include "ExampleLib.hpp"


namespace erbsland {


auto ExampleLib::getMagicWord() const noexcept -> std::string {
    return "Magic";
}


void ExampleLib::setName(std::string name) noexcept {
    _name = std::move(name);
}


auto ExampleLib::getName() const noexcept -> std::string {
    return _name;
}


auto ExampleLib::getNameLength() const noexcept -> std::size_t {
    return _name.size();
}


auto ExampleLib::isNamePalindrome() const noexcept -> bool {
    // error 1: Does not handle empty strings.
    // error 2: Does not use case insensitive comparison.
    // error 3: Does not handle space seperated names (that count as palindrome as well).
    const auto size = _name.size();
    for (std::size_t i = 0; i < size/2; ++i) {
        if (_name[i] != _name[size - i - 1]) {
            return false;
        }
    }
    return true;
}


}

