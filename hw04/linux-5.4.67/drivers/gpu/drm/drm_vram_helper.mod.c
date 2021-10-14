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
	{ 0x34444d70, "ttm_pool_populate" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6de948c6, "ttm_bo_eviction_valuable" },
	{ 0x4e35b468, "ttm_tt_fini" },
	{ 0x29434677, "ttm_bo_put" },
	{ 0x6b392142, "ttm_bo_move_to_lru_tail" },
	{ 0x97a2d765, "ttm_bo_validate" },
	{ 0xe98d3b51, "ttm_bo_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa8cee1ff, "ttm_bo_add_to_lru" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0x91b117a8, "ttm_bo_kmap" },
	{ 0x8d01694e, "ttm_tt_init" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0x1e81f408, "ttm_bo_dma_acc_size" },
	{ 0x98f4192d, "ttm_bo_init_mm" },
	{ 0xd2188866, "ttm_bo_device_init" },
	{ 0x5d9342e0, "ttm_bo_del_sub_from_lru" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfe82994, "ttm_bo_kunmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfa7b757d, "drm_gem_object_init" },
	{ 0x2e204eff, "ttm_bo_device_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x3dbd6e75, "ww_mutex_unlock" },
	{ 0x4e5b8e14, "ttm_bo_manager_func" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0xe81dfea1, "ttm_pool_unpopulate" },
	{ 0x426abb86, "ww_mutex_lock_interruptible" },
	{ 0xfce82111, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "ttm,drm");


MODULE_INFO(srcversion, "86A60583560940A8EB4ED7C");
