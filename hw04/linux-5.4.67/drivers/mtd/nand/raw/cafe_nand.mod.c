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
	{ 0xaad49c42, "param_array_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x975d445a, "nand_cleanup" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0xf330f3f1, "nand_scan_with_ids" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb2dd6ec, "nand_get_set_features_notsupp" },
	{ 0xe9fe18b0, "init_rs_non_canonical" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd6e035ac, "nand_wait_ready" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x5077cfa6, "nand_prog_page_end_op" },
	{ 0x83c4f8eb, "nand_prog_page_begin_op" },
	{ 0xb44f378b, "nand_prog_page_op" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x51410142, "decode_rs16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x59181131, "nand_read_page_op" },
	{ 0x8c4215b, "nand_read_oob_op" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,mtd,reed_solomon");

MODULE_ALIAS("pci:v000011ABd00004100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9FB17F0585101AD8E4A2C39");
