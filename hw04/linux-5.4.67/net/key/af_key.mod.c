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
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x3a943114, "sock_no_ioctl" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x97c5b84b, "xfrm_register_km" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x16830968, "xfrm_unregister_km" },
	{ 0xac5137f0, "xfrm_audit_policy_add" },
	{ 0xa88dd0c, "xfrm_policy_insert" },
	{ 0x665e746d, "xfrm_policy_alloc" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x7e2c5b3b, "xfrm_policy_bysel_ctx" },
	{ 0xc65304b3, "security_xfrm_policy_alloc" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0xbe2f913d, "xfrm_state_add" },
	{ 0xf85bbb24, "xfrm_audit_state_add" },
	{ 0x9213a495, "xfrm_state_update" },
	{ 0x2ffb1308, "xfrm_init_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x75612a4e, "xfrm_state_alloc" },
	{ 0x5265fb0c, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x395478eb, "xfrm_find_acq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9a668d01, "xfrm_find_acq_byseq" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x2577e11f, "xfrm_audit_state_delete" },
	{ 0xdca5c62c, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0xec36a606, "xfrm_audit_policy_delete" },
	{ 0x6664c9a9, "xfrm_policy_destroy" },
	{ 0x1a3211b, "xfrm_policy_byid" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xbcc68724, "km_state_notify" },
	{ 0xfe2506f9, "xfrm_state_flush" },
	{ 0x2fb34152, "km_policy_notify" },
	{ 0x568b7d11, "xfrm_policy_flush" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xc4142837, "seq_printf" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6589dc1e, "xfrm_state_walk" },
	{ 0x7dcb3f61, "xfrm_state_walk_done" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x12950e37, "skb_copy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x46612729, "sk_alloc" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x100d32ca, "xfrm_policy_walk_done" },
	{ 0xce4e8d44, "xfrm_policy_walk" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "FC37A9DF33D812802693729");
