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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4cd71f31, "rtnl_notify" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x45e69e01, "prepare_to_wait_exclusive" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd48a58f4, "sock_i_ino" },
	{ 0x279143f5, "seq_pad" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x603ba1d2, "compat_sock_common_setsockopt" },
	{ 0xcd97baf8, "sock_common_recvmsg" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0xdeb7eb4, "compat_sock_common_getsockopt" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x46612729, "sk_alloc" },
	{ 0x9e4e6af, "rtnl_register_module" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x12bc2eb, "dev_remove_pack" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3785c132, "init_net" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0xf720a60b, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbb9c728c, "proto_register" },
	{ 0x471754f1, "rtnl_set_sk_err" },
	{ 0x89462ec1, "netlink_capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0xbeeca5db, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5083ef8f, "sock_common_setsockopt" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x71190f1e, "sock_common_getsockopt" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x6b95e068, "dev_add_pack" },
	{ 0x15314fce, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9111d3b6, "register_net_sysctl" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc010edb1, "sock_i_uid" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x6fe64a49, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98B69A9345FC15649D98C15");
