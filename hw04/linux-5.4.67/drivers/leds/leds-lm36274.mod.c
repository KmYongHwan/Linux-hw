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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x5afa59fd, "device_get_child_node_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xced72aae, "ti_lmu_common_set_brightness" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "leds-ti-lmu-common");

MODULE_ALIAS("of:N*T*Cti,lm36274-backlight");
MODULE_ALIAS("of:N*T*Cti,lm36274-backlightC*");

MODULE_INFO(srcversion, "5E52D687C66411E68A2E728");
