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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x1113c204, "__serdev_device_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x293b77df, "btbcm_set_bdaddr" },
	{ 0xede283d, "release_firmware" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0x71deb539, "request_firmware" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x3984d99d, "hci_uart_tx_wakeup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xc7f4bf6d, "serdev_device_get_tiocm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcf1ab585, "serdev_device_set_baudrate" },
	{ 0x828c42cc, "serdev_device_write_flush" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d205528, "serdev_device_set_flow_control" },
	{ 0xc61a4fa4, "serdev_device_set_tiocm" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb94c2cf6, "hci_uart_register_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4a96006f, "gpiod_get_value" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x29361773, "complete" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x67f18697, "h4_recv_buf" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x2f9dd375, "serdev_device_wait_until_sent" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xdffc7690, "hci_uart_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btbcm,bluetooth,hci_uart");


MODULE_INFO(srcversion, "FE973C62BF499791BE2C2A4");
