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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4142837, "seq_printf" },
	{ 0xfb578fc5, "memset" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x6168380e, "seq_putc" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x6fbec09b, "kmem_cache_size" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3ACCA4FB23A87AD88E0D314");
