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
	{ 0x85a8ee76, "ubi_unregister_volume_notifier" },
	{ 0xf5ee9ba8, "ubi_register_volume_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xba312d7b, "current_task" },
	{ 0x1657180a, "ubi_open_volume" },
	{ 0xc26cb82, "ubi_leb_read" },
	{ 0x9972f5ed, "ubi_leb_write" },
	{ 0x9b157b2c, "ubi_leb_erase" },
	{ 0x69c7ce85, "ubi_leb_unmap" },
	{ 0x2ad532a2, "ubi_close_volume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ubi,mtd");


MODULE_INFO(srcversion, "D6AB257E0C4CE5FF969B575");
