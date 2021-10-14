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
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x6279732f, "pppox_compat_ioctl" },
	{ 0x35bcec96, "pppox_ioctl" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x3ef7092b, "register_pppox_proto" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x8303a2c5, "ppp_input" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0xe53725b0, "dev_get_by_name_rcu" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xce6049b6, "ppp_register_net_channel" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0x95a9d784, "pskb_trim_rcsum_slow" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x7ce0cbe, "pppox_unbind_sock" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xa3d8c124, "sock_wmalloc" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15314fce, "consume_skb" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x46612729, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox");


MODULE_INFO(srcversion, "C5102176E4C284535947129");
