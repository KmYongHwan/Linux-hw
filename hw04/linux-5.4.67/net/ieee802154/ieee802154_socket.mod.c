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
	{ 0xbcde298, "dev_load" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0xfc78dc37, "dev_getbyhwaddr_rcu" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0xcd97baf8, "sock_common_recvmsg" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0xdbed3cd3, "ieee802154_hdr_pull" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x46612729, "sk_alloc" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x60572429, "sock_prot_inuse_add" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0x3785c132, "init_net" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
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
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "070FD355343982AE1C48C2A");
