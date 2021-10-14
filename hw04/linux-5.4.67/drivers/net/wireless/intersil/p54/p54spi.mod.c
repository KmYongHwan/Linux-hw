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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x8b742fa0, "p54_free_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd374019, "p54_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xe09613ba, "p54_register_common" },
	{ 0xbf0bddf7, "p54_parse_eeprom" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xaa8a9c97, "request_firmware_direct" },
	{ 0x49931fbb, "p54_parse_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xb581d360, "p54_init_common" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x499e036, "p54_free_common" },
	{ 0xede283d, "release_firmware" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xe3fbf421, "p54_unregister_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common,mac80211");


MODULE_INFO(srcversion, "36C9064285986BA6C0FD4E3");
