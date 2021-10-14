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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0x3140c6f6, "nand_status_op" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x975d445a, "nand_cleanup" },
	{ 0xf330f3f1, "nand_scan_with_ids" },
	{ 0x38861500, "init_rs_gfp" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0xdd12a672, "nand_create_bbt" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xec156460, "nand_reset_op" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37169bb4, "mtd_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51410142, "decode_rs16" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,reed_solomon,mtd");


MODULE_INFO(srcversion, "26CAA696EBD9C939C8FBE6E");
