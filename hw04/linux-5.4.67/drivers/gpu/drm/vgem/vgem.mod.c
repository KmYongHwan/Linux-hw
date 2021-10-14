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
	{ 0xc344af18, "drm_release" },
	{ 0x5e7bce08, "drm_prime_gem_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf088322, "drm_dev_register" },
	{ 0xfb9c4ea1, "drm_compat_ioctl" },
	{ 0xc8be3289, "drm_gem_put_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xc2bfdf20, "dma_resv_test_signaled_rcu" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8efb6ca7, "drm_gem_prime_import_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x493fceaf, "drm_dev_fini" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xca161191, "drm_dev_put" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5482e4ac, "drm_dev_unregister" },
	{ 0x21a97444, "drm_prime_pages_to_sg" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x50413763, "dma_resv_add_shared_fence" },
	{ 0x8109c6d8, "drm_gem_handle_create" },
	{ 0x56530b5c, "vmap" },
	{ 0xbf35eed, "drm_gem_object_put_unlocked" },
	{ 0x344366d3, "shmem_read_mapping_page_gfp" },
	{ 0x1be9e0ed, "ww_mutex_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd7491936, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xb245c251, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xa0fd0123, "fput" },
	{ 0x355375c, "drm_gem_vm_open" },
	{ 0xac976e64, "drm_gem_vm_close" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeaf7a216, "drm_gem_prime_fd_to_handle" },
	{ 0x1edd586c, "drm_ioctl" },
	{ 0x31ba46ca, "drm_gem_mmap" },
	{ 0x5a3269d1, "drm_clflush_pages" },
	{ 0xc8734d8, "dma_resv_reserve_shared" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d06f8c9, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc12c4f0, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3cde5b42, "drm_gem_prime_handle_to_fd" },
	{ 0xfa7b757d, "drm_gem_object_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x3dbd6e75, "ww_mutex_unlock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x245e4356, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3f2018eb, "drm_gem_get_pages" },
	{ 0xf1af984b, "dma_resv_add_excl_fence" },
	{ 0xea43a0e3, "drm_poll" },
	{ 0xcdc40c6e, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "FECD1854B6D77A38D5FAB13");
