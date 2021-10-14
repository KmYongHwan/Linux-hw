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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0x676d91c5, "gserial_connect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0xe692f9a8, "gserial_disconnect" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0xde57c258, "usb_string_id" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "B087B7A692902C7D1F4D065");
