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
#pragma once


#include <string>
#include <cstdint>


namespace erbsland {


/// The interface of the example library.
///
/// This is a library to demonstrate *Erbsland UnitTest* features.
/// It deliberately contains problems to allow the unit test detecting issues.
///
class ExampleLib {
public: // defaults
    ExampleLib() = default;
    ~ExampleLib() = default;

public:
    /// Get the magic word.
    ///
    /// @return The magic word.
    ///
    [[nodiscard]] auto getMagicWord() const noexcept -> std::string;

    /// Set the name.
    ///
    /// @param name The new name.
    ///
    void setName(std::string name) noexcept;

    /// Get the name.
    ///
    /// @return The name.
    ///
    [[nodiscard]] auto getName() const noexcept -> std::string;

    /// Get the length of the current name.
    ///
    /// @return The length of the name in characters.
    ///
    [[nodiscard]] auto getNameLength() const noexcept -> std::size_t;

    /// Check if the name is a palindrome.
    ///
    /// @return `true` if the name is a palindrome.
    ///
    [[nodiscard]] auto isNamePalindrome() const noexcept -> bool;

    /// Check if the palindrome is an even or odd one.
    ///
    /// @return `true` if it is an even one (with 2, 4, 6, ... letters).
    /// @throws std::domain_error If the name is no palindrome.
    ///
    [[nodiscard]] auto isEvenPalindrome() const -> bool;

private:
    std::string _name;
};


}

