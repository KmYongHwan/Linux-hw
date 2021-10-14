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
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0xfe9b3b60, "input_mt_get_slot_by_key" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5ada0011, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xff76d558, "input_register_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x78fedf54, "devm_gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0037:*");

MODULE_INFO(srcversion, "C757A726CE279D1A15A9663");
