/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:		Yimne Raid
<<<<<<< HEAD
 * Due Date:	12.Nov, 2018
=======
 * Due Date:		October 15, 2014
>>>>>>> 7fdbd46114c6bbe77ac7fb5e4b1503257ad8ba55
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */
<<<<<<< HEAD


 //Enumerations
 #ifndef ____CHESS___H
 #define ____CHESS___H
enum   PieceType { Pawn, Rook, Knight, Bishop, Queen, King, NoPiece };
enum  PieceColor { White, Black };
enum  MoveType { NormalMove, CaptureMove };

//Structs
struct ChessPiece
{
  enum PieceColor color;
  enum PieceType type;
};
struct ChessSquare
{
  bool  is_occupied;
  struct ChessPiece piece;

};
 typedef struct ChessSquare ChessBoard [8][8];
 typedef char  File;
 typedef int 	Rank;

 //Functions
bool is_piece (  struct ChessPiece pc,  enum PieceColor color,  enum PieceType type);
void 	init_chess_board (ChessBoard chess_board);
struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank);
bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank);
bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece);
struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank);
void 	setup_chess_board (ChessBoard chess_board);
bool 	remove_piece (ChessBoard chess_board, File file, Rank rank);
bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
#endif
=======
 bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type){
   return false;
 };
 void 	init_chess_board (ChessBoard chess_board){
   return false;
 };
 struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank)

 bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank){
   return false;
 };
 bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece){
   return false;
 };
 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank)
 void 	setup_chess_board (ChessBoard chess_board){
   return false;
 };
 bool 	remove_piece (ChessBoard chess_board, File file, Rank rank){
   return false;
 };
 bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
 bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r){
   return false;
 };
>>>>>>> 7fdbd46114c6bbe77ac7fb5e4b1503257ad8ba55
