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
	{ 0xa0e09e4a, "rsi_91x_init" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xab4cc403, "rsi_mac80211_detach" },
	{ 0x7a6fe85c, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xaa06691c, "rsi_hal_device_init" },
	{ 0x15314fce, "consume_skb" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x8b4c325b, "rsi_91x_deinit" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xe00ee1b7, "rsi_bt_ops" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3E4E8E813DEED00E58978D");
