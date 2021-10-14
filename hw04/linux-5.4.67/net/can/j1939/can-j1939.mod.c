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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8e0f3c58, "can_rx_register" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc9456db6, "can_proto_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xec731c3c, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x30ec4321, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x95451c3, "netdev_alert" },
	{ 0x4fb715da, "sock_queue_err_skb" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xabfd8389, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x2825d345, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x52e6e165, "sock_no_socketpair" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x83f5192, "sock_recv_errqueue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x1e185f5a, "sock_no_listen" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x511a1a83, "sock_no_accept" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb18156be, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4afcff9, "sock_no_shutdown" },
	{ 0x1ea0099a, "can_send" },
	{ 0x4dcde7e3, "__sock_recv_ts_and_drops" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97493cb0, "datagram_poll" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xed2051c, "can_proto_register" },
	{ 0xf8b90c94, "sock_alloc_send_skb" },
	{ 0x5cf7aa0e, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x157ccef9, "can_sock_destruct" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x30233bf, "can_rx_unregister" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6fe64a49, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "4021D023576E0BA3AD5AF9D");
