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
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x70115aba, "sock_no_setsockopt" },
	{ 0x4f967e04, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x96433efb, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xa4e0925e, "bt_sock_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x30cbccf3, "sock_no_recvmsg" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x733842dd, "bt_sock_unlink" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0x12cc5e91, "l2cap_is_socket" },
	{ 0x3f438090, "sock_no_bind" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xb18156be, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x3785c132, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0fd0123, "fput" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0xab1637e0, "bt_sock_link" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbb9c728c, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1865e519, "proto_unregister" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xd184ebc9, "__module_put_and_exit" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9415ca79, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xdc820989, "sock_no_sendmsg" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x62f4be2, "bt_procfs_init" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x813fbf2d, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5EB8AAF4BEA7B3157007CA8");
