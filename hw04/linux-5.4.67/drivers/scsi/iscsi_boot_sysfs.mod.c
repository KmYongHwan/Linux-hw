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
	{ 0xe7750f8, "kobject_put" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x24ec67d2, "firmware_kobj" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
