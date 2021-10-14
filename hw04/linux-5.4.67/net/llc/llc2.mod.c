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
	{ 0x66e9f04d, "release_sock" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0xfc78dc37, "dev_getbyhwaddr_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdd2099c0, "sk_wait_data" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x2825d345, "sock_efree" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x6c1b4808, "llc_set_station_handler" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x52d7b2fd, "llc_sap_list" },
	{ 0xf8673de, "llc_mac_hdr_init" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x38b92846, "llc_remove_pack" },
	{ 0xbfb22260, "llc_sap_find" },
	{ 0x3785c132, "init_net" },
	{ 0xc496529e, "llc_add_pack" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x63ff7227, "dev_getfirstbyhwtype" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0x5cf7aa0e, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xea37be37, "llc_sap_open" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x301dcc29, "llc_sap_close" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xef41ad51, "llc_build_and_send_ui_pkt" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "28BE0E8E1B11EAEED06E61F");
