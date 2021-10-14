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
	{ 0xb27f114a, "vmbus_driver_unregister" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x277a6037, "hid_add_device" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0x5ecdac6f, "vmbus_sendpacket" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd01428b, "hv_pkt_iter_close" },
	{ 0xdd8e542e, "__hv_pkt_iter_next" },
	{ 0xb7cbe876, "hv_pkt_iter_first" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x1689a306, "vmbus_close" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,hid");

MODULE_ALIAS("vmbus:9eb6a8cf4a5bc04cb98b8ba1a1f3f95a");

MODULE_INFO(srcversion, "9C23D371031437D529ED693");
