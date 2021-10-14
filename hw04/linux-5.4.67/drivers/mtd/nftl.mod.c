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
	{ 0xfc69758f, "del_mtd_blktrans_dev" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb52b78eb, "mtd_block_isbad" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1f6ca540, "add_mtd_blktrans_dev" },
	{ 0x6b36b4f2, "register_mtd_blktrans" },
	{ 0xff29dadd, "mtd_erase" },
	{ 0xc5850110, "printk" },
	{ 0x37169bb4, "mtd_read" },
	{ 0x4cd7de4, "mtd_write_oob" },
	{ 0xf08947b2, "mtd_block_markbad" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x449f802, "deregister_mtd_blktrans" },
	{ 0x37a0cba, "kfree" },
	{ 0xb225da10, "mtd_read_oob" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "2A646A9C1457B5FD5CFD1B6");
