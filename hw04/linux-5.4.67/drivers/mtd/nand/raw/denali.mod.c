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
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x5077cfa6, "nand_prog_page_end_op" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x83c4f8eb, "nand_prog_page_begin_op" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x89304190, "nand_ecc_choose_conf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x975d445a, "nand_cleanup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8ecbb3b8, "nand_check_erased_ecc_chunk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf330f3f1, "nand_scan_with_ids" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x59181131, "nand_read_page_op" },
	{ 0xb11d00ef, "nand_change_write_column_op" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4325b278, "nand_change_read_column_op" },
	{ 0x29361773, "complete" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "nand,mtd");


MODULE_INFO(srcversion, "9D52DF5AA94EDCB8A9BD626");
