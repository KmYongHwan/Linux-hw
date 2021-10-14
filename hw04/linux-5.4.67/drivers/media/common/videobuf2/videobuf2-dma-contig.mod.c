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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x69a34af1, "dma_get_sgtable_attrs" },
	{ 0xc829f7c0, "dma_mmap_attrs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb801a8af, "dma_buf_detach" },
	{ 0x5618b4c0, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5386438a, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0xee575aba, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x53bb9894, "dma_buf_unmap_attachment" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x9edd8762, "dma_direct_map_resource" },
	{ 0x5ba4af2f, "dma_buf_map_attachment" },
	{ 0x5c06660c, "dma_buf_export" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x36e5f840, "dma_buf_attach" },
	{ 0x963cf8c8, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x8ad2d64b, "vb2_common_vm_ops" },
	{ 0xb5bc8db9, "dma_direct_sync_sg_for_device" },
	{ 0xee3124a4, "sg_alloc_table_from_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xf7ff11e5, "dma_buf_vmap" },
	{ 0xa637b975, "dma_ops" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "B3043D3E0EA139C8096318D");
