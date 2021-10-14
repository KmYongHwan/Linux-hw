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
	{ 0x601aeedc, "can_change_mtu" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xcb3f70cb, "register_candev" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xf006d007, "alloc_candev_mqs" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2b4b5e45, "alloc_can_skb" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb0e602eb, "memmove" },
	{ 0x29361773, "complete" },
	{ 0xe3b8b26d, "can_bus_off" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x21243b85, "alloc_can_err_skb" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x127bd30c, "open_candev" },
	{ 0x8eb937e0, "close_candev" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf2acf242, "free_candev" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2825d345, "sock_efree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x96848186, "scnprintf" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "70412AA9E88F94398A45A60");
