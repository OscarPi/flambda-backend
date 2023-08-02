(** Representation of the DWARF .debug_line section. *)

open Asm_targets

type t

val create : unit -> t

val add_source_file : t -> file_name:string -> file_num:int -> unit

val add_line_number_matrix_row :
  t ->
  instr_address:int ->
  file_num:int ->
  line:int ->
  col:int ->
  discriminator:int option ->
  section_name:string ->
  unit

val register_code_section :
  t -> symbol:Asm_symbol.t -> section_name:string -> unit

val checkpoint : t -> unit

val rollback : t -> unit

include Dwarf_emittable.S with type t := t
