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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0xdb7c6144, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x2b32a81e, "fsg_common_set_cdev" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x1c8ac69d, "usb_composite_overwrite_options" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf1a6dfa1, "usb_composite_probe" },
	{ 0x4e167f0f, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x6cdc15e2, "usb_put_function" },
	{ 0xe254cec9, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2afaeb4, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f3ae49c, "usb_string_ids_tab" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x4f5c843d, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xe1d3b18c, "usb_remove_function" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite");


MODULE_INFO(srcversion, "1FA761040CDFC8DA46AD025");
