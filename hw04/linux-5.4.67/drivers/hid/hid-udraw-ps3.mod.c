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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x5ada0011, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000020D6p0000CB17");

MODULE_INFO(srcversion, "E38CFD381A4AD91063DDF5C");
