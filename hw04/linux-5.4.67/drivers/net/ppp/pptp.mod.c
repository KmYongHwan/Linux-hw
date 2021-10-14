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
	{ 0x30cbccf3, "sock_no_recvmsg" },
	{ 0xdc820989, "sock_no_sendmsg" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x6279732f, "pppox_compat_ioctl" },
	{ 0x35bcec96, "pppox_ioctl" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0xf331c282, "gre_del_protocol" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x3ef7092b, "register_pppox_proto" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x38ceb1b7, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x76cbebf3, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xa45f32ff, "__ip_select_ident" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0xb18156be, "skb_pull" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7ce0cbe, "pppox_unbind_sock" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x8cc87a7f, "ppp_register_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd81314bf, "sk_setup_caps" },
	{ 0xbb038948, "ip_route_output_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x66e9f04d, "release_sock" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x46612729, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,gre");


MODULE_INFO(srcversion, "BC4E562362A8D71FAA085DF");
