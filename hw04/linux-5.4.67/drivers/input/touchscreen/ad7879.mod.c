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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0xdae1d8d2, "devm_gpiochip_add_data" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x5ada0011, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x2bc97e5a, "device_property_present" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3B8612A16CC09E7F1DD6087");
