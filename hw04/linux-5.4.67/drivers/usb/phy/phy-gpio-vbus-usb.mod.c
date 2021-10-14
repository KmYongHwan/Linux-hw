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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfc93356d, "usb_gadget_vbus_connect" },
	{ 0x508da81c, "usb_phy_set_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xabb07f9d, "usb_gadget_vbus_disconnect" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0xc0093f82, "usb_add_phy" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x4a6704bc, "devm_gpio_request" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xf0b5498d, "regulator_set_current_limit" },
	{ 0x8d5eb965, "usb_remove_phy" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "0B79E3D1AC6DE76818CCD10");
