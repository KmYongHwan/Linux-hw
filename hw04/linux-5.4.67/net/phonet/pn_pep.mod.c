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
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x66e9f04d, "release_sock" },
	{ 0xcba1a7c4, "sock_init_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x8b1419ec, "pn_sock_unhash" },
	{ 0x4de4fb5f, "sk_stream_wait_connect" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0xdd9cd2ad, "skb_set_owner_w" },
	{ 0x951a2c54, "pn_sock_hash" },
	{ 0xee6d84bb, "phonet_proto_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1ef238a2, "sock_rfree" },
	{ 0x88a67e53, "sk_common_release" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xcebfc730, "pn_sock_get_port" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x46612729, "sk_alloc" },
	{ 0xba312d7b, "current_task" },
	{ 0x52b48091, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf9e7b235, "__sk_receive_skb" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0xeaceacfe, "phonet_proto_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce282669, "pn_skb_send" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa21b5cbc, "phonet_stream_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "phonet");


MODULE_INFO(srcversion, "919112CB639EB6624E53D68");
