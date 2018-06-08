#if !defined(DATA_INCLUDED)
# define DATA_INCLUDED
extern SHARED *shared;
extern char version[6];
extern PLAYING_MODE mode;
extern int batch_mode;
extern int swindle_mode;
extern int call_flag;
extern int crafty_rating;
extern int opponent_rating;
extern int time_used;
extern int time_used_opponent;
extern BITBOARD total_moves;
extern int initialized;
extern int early_exit;
extern int new_game;
extern char *AK_list[128];
extern char *GM_list[128];
extern char *IM_list[128];
extern char *C_list[128];
extern char *B_list[128];
extern char *SP_list[128];
extern char *SP_opening_filename[128];
extern char *SP_personality_filename[128];
extern FILE *input_stream;
extern FILE *dbout;
extern FILE *book_file;
extern FILE *books_file;
extern FILE *normal_bs_file;
extern FILE *computer_bs_file;
extern FILE *history_file;
extern FILE *log_file;
extern FILE *auto_file;
extern FILE *book_lrn_file;
extern FILE *position_file;
extern FILE *position_lrn_file;
extern int log_id;
extern int output_format;
#if !defined(NOEGTB)
extern int EGTBlimit;
extern int EGTB_draw;
extern int EGTB_search;
extern int EGTB_use;
extern void *EGTB_cache;
extern size_t EGTB_cache_size;
extern int EGTB_setup;
#endif
extern int DGT_active;
extern int to_dgt;
extern int from_dgt;
extern int done;
extern int last_mate_score;
extern int last_opponent_move;
extern int incheck_depth;
extern int onerep_depth;
extern int recap_depth;
extern int mate_depth;
extern int null_min;
extern int null_max;
extern int pgn_suggested_percent;
extern char pgn_event[128];
extern char pgn_date[128];
extern char pgn_round[128];
extern char pgn_site[128];
extern char pgn_white[128];
extern char pgn_white_elo[128];
extern char pgn_black[128];
extern char pgn_black_elo[128];
extern char pgn_result[128];
extern char log_filename[64];
extern char history_filename[64];
extern int number_of_solutions;
extern int solutions[10];
extern int solution_type;
extern int abs_draw_score;
extern int accept_draws;
extern int offer_draws;
extern int adaptive_hash;
extern size_t adaptive_hash_min;
extern size_t adaptive_hash_max;
extern size_t adaptive_hashp_min;
extern size_t adaptive_hashp_max;
extern int over;
extern int silent;
extern int ics;
extern int xboard;
extern int pong;
extern int channel;
extern char channel_title[32];
extern char book_path[128];
extern char personality_path[128];
extern char log_path[128];
extern char tb_path[128];
extern char rc_path[128];
extern char cmd_buffer[4096];
extern char *args[256];
extern char buffer[512];
extern int nargs;
extern int kibitz;
extern int wtm;
extern int last_search_value;
extern int ponder_value;
extern int move_actually_played;
extern int analyze_mode;
extern int annotate_mode;
extern int test_mode;
extern int input_status;        /* 0=no input; 
                                   1=predicted move read;
                                   2=unpredicted move read;
                                   3=something read, not executed. */
extern int resign;
extern int resign_counter;
extern int resign_count;
extern int draw_counter;
extern int draw_count;
extern int draw_offer_pending;
extern char audible_alarm;
extern char speech;
extern char hint[512];
extern char book_hint[512];
extern int post;
extern int search_depth;
extern unsigned int search_nodes;
extern int search_move;
extern int ponder;
extern int ponder_move;
extern int force;
extern int ponder_moves[220];
extern int num_ponder_moves;
extern char initial_position[80];
extern int predicted;
extern int ansi;
extern int trace_level;
extern int book_move;
extern int moves_out_of_book;
extern int book_accept_mask;
extern int book_reject_mask;
extern int book_random;
extern float book_weight_freq;
extern float book_weight_eval;
extern float book_weight_learn;
extern float book_weight_CAP;
extern int book_search_trigger;
extern int book_selection_width;
extern int show_book;
extern int learning;
extern int learning_cutoff;
extern int learning_trigger;
extern int book_learn_eval[LEARN_INTERVAL];
extern int book_learn_depth[LEARN_INTERVAL];
extern int usage_level;
extern int log_hash;
extern int log_pawn_hash;
extern size_t hash_table_size;
extern size_t pawn_hash_table_size;
extern int hash_mask;
extern unsigned int pawn_hash_mask;
extern HASH_ENTRY *trans_ref;
extern PAWN_HASH_ENTRY *pawn_hash_table;
extern size_t cb_trans_ref;
extern size_t cb_pawn_hash_table;
extern const int p_values[15];
extern PATH last_pv;
extern int last_value;
extern const char xlate[15];
extern const char empty[9];
extern const char square_color[64];
extern int white_outpost[64];
extern int black_outpost[64];
extern int connected_passed_pawn_value[8];
extern int hidden_passed_pawn_value[8];
extern int passed_pawn_value[8];
extern int blockading_passed_pawn_value[8];
extern int isolated_pawn_value[9];
extern int isolated_pawn_of_value[9];
extern int doubled_pawn_value[9];
extern int pawn_rams_v[9];
extern int pawn_rams[9];
extern int pawn_space[8];
extern int supported_passer[8];
extern int outside_passed[128];
extern int majority[128];
extern int temper[64];
extern int temper_b[64], temper_w[64];
extern int ttemper[64];
extern int king_safety_asymmetry;
extern int king_safety_scale;
extern int king_safety_tropism;
extern int blocked_scale;
extern int pawn_scale;
extern int passed_scale;
extern int openf[4];
extern int hopenf[4];
extern int king_tropism_n[8];
extern int king_tropism_b[8];
extern int king_tropism_r[8];
extern int king_tropism_at_r[8];
extern int king_tropism_q[8];
extern int king_tropism_at_q[8];
extern int king_tropism[128];
extern int tropism[128];
extern int pval_w[64];
extern int pval_b[64];
extern int nval_w[64];
extern int nval_b[64];
extern int bval_w[64];
extern int bval_b[64];
extern int rval_w[64];
extern int rval_b[64];
extern int qval_w[64];
extern int qval_b[64];
extern int kval_wn[64];
extern int kval_wk[64];
extern int kval_wq[64];
extern int kval_bn[64];
extern int kval_bk[64];
extern int kval_bq[64];
extern int king_defects_w[64];
extern int king_defects_b[64];
extern int bishop_pair[9];
extern const char b_n_mate_dark_squares[64];
extern const char b_n_mate_light_squares[64];
extern const char mate[64];
extern signed char directions[64][64];
extern BITBOARD w_pawn_attacks[64];
extern BITBOARD b_pawn_attacks[64];
extern BITBOARD knight_attacks[64];
extern BITBOARD bishop_attacks[64];
extern BITBOARD bishop_attacks_rl45[64][64];
extern BITBOARD bishop_attacks_rr45[64][64];
extern BITBOARD rook_attacks_r0[64][64];
extern BITBOARD rook_attacks_rl90[64][64];
extern int bishop_mobility_rl45[64][64];
extern int bishop_mobility_rr45[64][64];
extern unsigned char bishop_shift_rl45[64];
extern unsigned char bishop_shift_rr45[64];
extern int rook_mobility_r0[64][64];
extern int rook_mobility_rl90[64][64];
extern BITBOARD rook_attacks[64];
extern POSITION display;
extern BITBOARD queen_attacks[64];
extern BITBOARD king_attacks[64];
extern BITBOARD obstructed[64][64];
extern BITBOARD w_pawn_random[64];
extern BITBOARD b_pawn_random[64];
extern BITBOARD w_knight_random[64];
extern BITBOARD b_knight_random[64];
extern BITBOARD w_bishop_random[64];
extern BITBOARD b_bishop_random[64];
extern BITBOARD w_rook_random[64];
extern BITBOARD b_rook_random[64];
extern BITBOARD w_queen_random[64];
extern BITBOARD b_queen_random[64];
extern BITBOARD w_king_random[64];
extern BITBOARD b_king_random[64];
extern BITBOARD stalemate_sqs[64];
extern BITBOARD edge_moves[64];
extern BITBOARD enpassant_random[65];
extern BITBOARD castle_random_w[2];
extern BITBOARD castle_random_b[2];
extern BITBOARD wtm_random[2];
extern BITBOARD clear_mask[65];
extern BITBOARD clear_mask_rl90[65];
extern BITBOARD clear_mask_rl45[65];
extern BITBOARD clear_mask_rr45[65];
extern BITBOARD set_mask[65];
extern BITBOARD set_mask_rl90[65];
extern BITBOARD set_mask_rl45[65];
extern BITBOARD set_mask_rr45[65];
extern BITBOARD file_mask[8];
extern BITBOARD rank_mask[8];
extern BITBOARD right_side_mask[8];
extern BITBOARD left_side_mask[8];
extern BITBOARD right_side_empty_mask[8];
extern BITBOARD left_side_empty_mask[8];
extern BITBOARD mask_efgh, mask_fgh, mask_abc, mask_abcd;
extern BITBOARD mask_abs7_w, mask_abs7_b;
extern BITBOARD mask_advance_2_w;
extern BITBOARD mask_advance_2_b;
extern BITBOARD mask_left_edge;
extern BITBOARD mask_right_edge;
extern BITBOARD mask_not_edge;
extern BITBOARD mask_WBT;
extern BITBOARD mask_BBT;
extern BITBOARD mask_A3B3;
extern BITBOARD mask_B3C3;
extern BITBOARD mask_F3G3;
extern BITBOARD mask_G3H3;
extern BITBOARD mask_A6B6;
extern BITBOARD mask_B6C6;
extern BITBOARD mask_F6G6;
extern BITBOARD mask_G6H6;
extern BITBOARD mask_white_OO;
extern BITBOARD mask_white_OOO;
extern BITBOARD mask_black_OO;
extern BITBOARD mask_black_OOO;
extern BITBOARD mask_kr_trapped_w[3];
extern BITBOARD mask_qr_trapped_w[3];
extern BITBOARD mask_kr_trapped_b[3];
extern BITBOARD mask_qr_trapped_b[3];
extern BITBOARD good_bishop_kw;
extern BITBOARD good_bishop_qw;
extern BITBOARD good_bishop_kb;
extern BITBOARD good_bishop_qb;
extern BITBOARD light_squares;
extern BITBOARD dark_squares;
extern BITBOARD not_rook_pawns;
extern BITBOARD plus1dir[65];
extern BITBOARD plus7dir[65];
extern BITBOARD plus8dir[65];
extern BITBOARD plus9dir[65];
extern BITBOARD minus1dir[65];
extern BITBOARD minus7dir[65];
extern BITBOARD minus8dir[65];
extern BITBOARD minus9dir[65];
extern BITBOARD mask_eptest[64];
# if !defined(ALPHA)
extern BITBOARD mask_1;
extern BITBOARD mask_2;
extern BITBOARD mask_3;
extern BITBOARD mask_8;
extern BITBOARD mask_16;
extern BITBOARD mask_112;
extern BITBOARD mask_120;
# endif
extern BITBOARD mask_clear_entry;
# if !defined(_M_AMD64) && !defined (_M_IA64) && !defined(INLINE_ASM)
extern unsigned char first_one[65536];
extern unsigned char last_one[65536];
# endif
extern unsigned char first_one_8bit[256];
extern unsigned char last_one_8bit[256];
extern unsigned char pop_cnt_8bit[256];
extern unsigned char connected_passed[256];
extern unsigned char file_spread[256];
extern signed char is_outside[256][256];
extern signed char is_outside_c[256][256];
extern BITBOARD mask_pawn_protected_b[64];
extern BITBOARD mask_pawn_protected_w[64];
extern BITBOARD mask_pawn_duo[64];
extern BITBOARD mask_pawn_isolated[64];
extern BITBOARD mask_pawn_passed_w[64];
extern BITBOARD mask_pawn_passed_b[64];
extern BITBOARD mask_no_pattacks_w[64];
extern BITBOARD mask_no_pattacks_b[64];
extern BITBOARD white_minor_pieces;
extern BITBOARD black_minor_pieces;
extern BITBOARD white_pawn_race_wtm[64];
extern BITBOARD white_pawn_race_btm[64];
extern BITBOARD black_pawn_race_wtm[64];
extern BITBOARD black_pawn_race_btm[64];
extern BOOK_POSITION book_buffer[BOOK_CLUSTER_SIZE];
extern BOOK_POSITION books_buffer[BOOK_CLUSTER_SIZE];
#if !defined(NOEGTB)
extern int cbEGTBCompBytes;
#endif
extern int pawn_value;
extern int knight_value;
extern int bishop_value;
extern int rook_value;
extern int queen_value;
extern int king_value;
extern int bad_trade;
extern int eight_pawns;
extern int pawns_blocked;
extern int center_pawn_unmoved;
extern int pawn_can_promote;
extern int bad_trade;
extern int eight_pawns;
extern int pawns_blocked;
extern int center_pawn_unmoved;
extern int pawn_duo;
extern int pawn_jam;
extern int pawn_weak_p1;
extern int pawn_weak_p2;
extern int pawn_protected_passer_wins;
extern int won_kp_ending;
extern int split_passed;
extern int pawn_base[8];
extern int pawn_advance[8];
extern int king_king_tropism;
extern int bishop_trapped;
extern int bishop_plus_pawns_on_color;
extern int bishop_over_knight_endgame;
extern int bishop_mobility;
extern int bishop_king_safety;
extern int rook_on_7th;
extern int rook_absolute_7th;
extern int rook_connected_7th_rank;
extern int rook_open_file[8];
extern int rook_half_open_file[8];
extern int rook_behind_passed_pawn;
extern int rook_trapped;
extern int rook_limited;
extern int queen_rook_on_7th_rank;
extern int queen_king_safety;
extern int queen_vs_2_rooks;
extern int queen_is_strong;
extern int queen_offside_tropism;
extern int king_safety_mate_g2g7;
extern int king_safety_mate_threat;
extern int king_safety_stonewall;
extern int king_safety_open_file;
extern int castle_opposite;
extern int development_thematic;
extern int development_unmoved;
extern int blocked_center_pawn;
extern int development_losing_castle;
extern int development_not_castled;
extern int development_queen_early;
extern int development_castle_bonus;
extern int *evalterm_value[256];
extern char *evalterm_description[256];
extern int evalterm_size[256];
#endif
