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
	{ 0x8e0f3c58, "can_rx_register" },
	{ 0x4c764fdc, "sock_gettstamp" },
	{ 0xc9456db6, "can_proto_unregister" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1ea0099a, "can_send" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed2051c, "can_proto_register" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x688f350e, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x30233bf, "can_rx_unregister" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "62AFAADAE2DE76135AEB15F");
