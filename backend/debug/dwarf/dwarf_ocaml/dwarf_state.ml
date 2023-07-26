(**************************************************************************)
(*                                                                        *)
(*                                 OCaml                                  *)
(*                                                                        *)
(*                  Mark Shinwell, Jane Street Europe                     *)
(*                                                                        *)
(*   Copyright 2013--2018 Jane Street Group LLC                           *)
(*                                                                        *)
(*   All rights reserved.  This file is distributed under the terms of    *)
(*   the GNU Lesser General Public License version 2.1, with the          *)
(*   special exception on linking described in the file LICENSE.          *)
(*                                                                        *)
(**************************************************************************)

[@@@ocaml.warning "+a-4-30-40-41-42"]

open Asm_targets
open Dwarf_high
open Dwarf_low

type t =
  { compilation_unit_header_label : Asm_label.t;
    compilation_unit_proto_die : Proto_die.t;
    debug_line_section : Debug_line_section.t;
    debug_frame_section : Debug_frame_section.t
  }

let create ~compilation_unit_header_label ~compilation_unit_proto_die
    ~debug_line_section ~debug_frame_section =
  { compilation_unit_header_label;
    compilation_unit_proto_die;
    debug_line_section;
    debug_frame_section
  }

let compilation_unit_header_label t = t.compilation_unit_header_label

let compilation_unit_proto_die t = t.compilation_unit_proto_die

let debug_line_section t = t.debug_line_section

let debug_frame_section t = t.debug_frame_section
