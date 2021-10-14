#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa098317c, "iscsi_eh_cmd_timed_out" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x8ee1525d, "iscsi_target_alloc" },
	{ 0x91057e43, "iscsi_eh_recover_target" },
	{ 0x85d124fd, "iscsi_eh_device_reset" },
	{ 0xebc276fd, "iscsi_eh_abort" },
	{ 0x5bef4d9c, "iscsi_queuecommand" },
	{ 0xef346615, "cxgbi_attr_is_visible" },
	{ 0xa9dc438f, "cxgbi_ep_disconnect" },
	{ 0x813e0978, "cxgbi_ep_poll" },
	{ 0x18536310, "cxgbi_ep_connect" },
	{ 0x1493573c, "iscsi_session_recovery_timedout" },
	{ 0xa1b2f422, "cxgbi_parse_pdu_itt" },
	{ 0x65898bcd, "cxgbi_conn_init_pdu" },
	{ 0x4ce9fdac, "cxgbi_conn_xmit_pdu" },
	{ 0x9686a216, "cxgbi_conn_alloc_pdu" },
	{ 0xbbb06c90, "cxgbi_cleanup_task" },
	{ 0x49489a8b, "iscsi_tcp_task_xmit" },
	{ 0xa60729d3, "iscsi_tcp_task_init" },
	{ 0xf2f24d02, "cxgbi_get_conn_stats" },
	{ 0x16f1cff7, "iscsi_conn_send_pdu" },
	{ 0xb134ddd8, "cxgbi_set_host_param" },
	{ 0x500f9237, "cxgbi_get_host_param" },
	{ 0x3d7f6c6c, "iscsi_session_get_param" },
	{ 0xc2d9368d, "iscsi_conn_get_param" },
	{ 0x601511ac, "cxgbi_get_ep_param" },
	{ 0xe82964e1, "cxgbi_set_conn_param" },
	{ 0xbfb3baa5, "iscsi_tcp_conn_teardown" },
	{ 0xfead2ba3, "iscsi_conn_stop" },
	{ 0x334453b3, "iscsi_conn_start" },
	{ 0xdecb8aed, "cxgbi_bind_conn" },
	{ 0x5605aef6, "cxgbi_create_conn" },
	{ 0xcdd86461, "cxgbi_destroy_session" },
	{ 0xe6220cce, "cxgbi_create_session" },
	{ 0x41bf2ccc, "cxgbi_iscsi_cleanup" },
	{ 0x7fdb6004, "cxgbi_device_unregister_all" },
	{ 0x63521fe9, "cxgb3_unregister_client" },
	{ 0x63580132, "cxgb3_register_client" },
	{ 0x7844b1ec, "cxgbi_iscsi_init" },
	{ 0x6cf8c069, "cxgbi_sock_select_mss" },
	{ 0xdc4184e2, "cxgb3_alloc_atid" },
	{ 0x468098f1, "t3_l2t_get" },
	{ 0xf29ba02d, "t3_l2e_free" },
	{ 0x169bafea, "cxgb3_remove_tid" },
	{ 0x5c0ddfb4, "cxgbi_sock_purge_wr_queue" },
	{ 0x2777555e, "cxgb3_free_atid" },
	{ 0xaeb38357, "cxgbi_conn_tx_open" },
	{ 0x8cf785a2, "cxgbi_sock_established" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe0aeb0eb, "cxgb3_insert_tid" },
	{ 0xbc1a9118, "cxgbi_sock_free_cpl_skbs" },
	{ 0xdc548a2b, "cxgbi_sock_closed" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xc011af75, "cxgbi_ddp_set_one_ppod" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc38b3ee, "cxgbi_sock_fail_act_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2a9c36b9, "cxgb3_queue_tid_release" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2a5778ce, "cxgbi_conn_pdu_ready" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdbe63b8, "cxgbi_sock_skb_entail" },
	{ 0xa9ff7b34, "t3_l2t_send_slow" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfaaab949, "cxgbi_hbas_add" },
	{ 0x21054589, "cxgbi_device_portmap_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2aa468c4, "cxgbi_ddp_ppm_setup" },
	{ 0x1bdaafe1, "cxgbi_tagmask_set" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x630fffc2, "cxgbi_device_register" },
	{ 0xfc07d225, "cxgbi_sock_rcv_peer_close" },
	{ 0x1e13ee3e, "cxgbi_sock_rcv_abort_rpl" },
	{ 0x177f8ead, "cxgbi_sock_rcv_close_conn_rpl" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x9223b54e, "cxgbi_sock_act_open_req_arp_failure" },
	{ 0x26683ebd, "cxgb3_ofld_send" },
	{ 0x5d6fd186, "cxgbi_device_unregister" },
	{ 0x7965116f, "cxgbi_device_find_by_lldev" },
	{ 0xc5850110, "printk" },
	{ 0x256511d6, "__kfree_skb" },
	{ 0x2813e58d, "cxgbi_sock_rcv_wr_ack" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libcxgbi,libiscsi_tcp,cxgb3,libcxgb");


MODULE_INFO(srcversion, "485E052933D0FCA4F635826");
