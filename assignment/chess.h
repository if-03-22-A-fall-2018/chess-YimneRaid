/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:		Yimne Raid
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */
<<<<<<< HEAD


=======
>>>>>>> 9415e31665392598dbaa24bc0c7f1e3a8b778b7a
 bool 	is_piece (struct ChessPiece pc, enum PieceColor color, enum PieceType type);
 void 	init_chess_board (ChessBoard chess_board);
 struct ChessSquare * 	get_square (ChessBoard chess_board, File file, Rank rank);
 bool 	is_square_occupied (ChessBoard chess_board, File file, Rank rank);
 bool 	add_piece (ChessBoard chess_board, File file, Rank rank, struct ChessPiece piece);
<<<<<<< HEAD
 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank);;
=======
 struct ChessPiece 	get_piece (ChessBoard chess_board, File file, Rank rank);
>>>>>>> 9415e31665392598dbaa24bc0c7f1e3a8b778b7a
 void 	setup_chess_board (ChessBoard chess_board);
 bool 	remove_piece (ChessBoard chess_board, File file, Rank rank);
 bool 	squares_share_file (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_rank (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_diagonal (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_knights_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_pawns_move (enum PieceColor color, enum MoveType move, File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_queens_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
 bool 	squares_share_kings_move (File s1_f, Rank s1_r, File s2_f, Rank s2_r);
