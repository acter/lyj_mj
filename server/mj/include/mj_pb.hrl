-record(qp_packet_req, {cmd, seq_id, body}).
-record(qp_packet_rsp, {cmd, seq_id, body}).
-record(login_req, {acc}).
-record(login_rsp, {state}).
-record(create_room_req, {room_type, ready_state}).
-record(create_room_rsp, {state, room_id}).
-record(join_room_req, {}).
-record(room_user, {seat_id}).
-record(join_room_rsp, {users}).
-record(ready_req, {}).
-record(ready_rsp, {}).
-record(game_data, {data}).