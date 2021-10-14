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
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x6279732f, "pppox_compat_ioctl" },
	{ 0x35bcec96, "pppox_ioctl" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xead0511, "l2tp_nl_register_ops" },
	{ 0x3ef7092b, "register_pppox_proto" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xae1a0412, "l2tp_xmit_skb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xa3d8c124, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7ce0cbe, "pppox_unbind_sock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb6b7ac8f, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x27c0c667, "l2tp_session_delete" },
	{ 0xce6049b6, "ppp_register_net_channel" },
	{ 0xa8b80792, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8e40a2b5, "l2tp_tunnel_register" },
	{ 0x5eea3d83, "l2tp_tunnel_create" },
	{ 0x1fe6e70f, "l2tp_tunnel_delete" },
	{ 0x52367df8, "l2tp_tunnel_get_session" },
	{ 0x275f3091, "l2tp_tunnel_get" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdea38f9, "ppp_dev_name" },
	{ 0xec0ddd7, "l2tp_session_get_nth" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xda226a4d, "l2tp_session_free" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xbf240586, "l2tp_tunnel_free" },
	{ 0x4fec341a, "l2tp_tunnel_get_nth" },
	{ 0xc5850110, "printk" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb18156be, "skb_pull" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2d522bc5, "l2tp_udp_encap_recv" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x46612729, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x44a9c6c5, "l2tp_session_register" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x507e5784, "l2tp_session_create" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");
