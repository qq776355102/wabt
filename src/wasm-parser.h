/*
 * Copyright 2016 WebAssembly Community Group participants
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WASM_PARSER_H_
#define WASM_PARSER_H_

#include "wasm-common.h"
#include "wasm-lexer.h"

struct WasmScript;

WASM_EXTERN_C_BEGIN
WasmResult wasm_parse(WasmLexer lexer, struct WasmScript* out_script);
WASM_EXTERN_C_END

#endif /* WASM_PARSER_H_ */
