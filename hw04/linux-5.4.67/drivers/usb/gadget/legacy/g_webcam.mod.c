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
	{ 0xdb7c6144, "usb_add_config" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x1c8ac69d, "usb_composite_overwrite_options" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf1a6dfa1, "usb_composite_probe" },
	{ 0x4e167f0f, "usb_add_function" },
	{ 0x6cdc15e2, "usb_put_function" },
	{ 0xe254cec9, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2afaeb4, "usb_get_function" },
	{ 0x1f3ae49c, "usb_string_ids_tab" },
	{ 0x4f5c843d, "usb_get_function_instance" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x442639ef, "param_ops_uint" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "E2AF792CB5D157B956BFA11");
