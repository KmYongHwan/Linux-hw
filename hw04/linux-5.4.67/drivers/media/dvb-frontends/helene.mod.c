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
	{ 0xf9a482f9, "msleep" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x74a69856, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:helene");

MODULE_INFO(srcversion, "78914CECC6EF4A4319507D7");
