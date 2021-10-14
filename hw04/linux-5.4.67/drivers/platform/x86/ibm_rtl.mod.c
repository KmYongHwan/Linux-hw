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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xb7ffb5ae, "subsys_system_register" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xa0f493d9, "efi" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf9a482f9, "msleep" },
	{ 0x848d372e, "iowrite8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf10de535, "ioread8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5AD9C15CF1612DDBC9B8426");
