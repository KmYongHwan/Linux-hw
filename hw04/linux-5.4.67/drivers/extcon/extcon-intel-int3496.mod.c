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
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x4dd92e55, "devm_extcon_dev_register" },
	{ 0x22f00398, "devm_extcon_dev_allocate" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x11757273, "extcon_set_state_sync" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3496:*");

MODULE_INFO(srcversion, "64738E32956F944AF8CCA97");
