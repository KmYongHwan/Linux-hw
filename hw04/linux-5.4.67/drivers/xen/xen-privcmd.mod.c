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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x103b037d, "vm_map_pages_zero" },
	{ 0x4b931968, "xen_features" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdceb0273, "xen_remap_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x47fda759, "misc_register" },
	{ 0xec4affa4, "xen_unmap_domain_gfn_range" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xaf0bbc18, "apply_to_page_range" },
	{ 0x9623497b, "alloc_xenballooned_pages" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xae0f8cf2, "xen_remap_vma_range" },
	{ 0xe907b656, "free_xenballooned_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5c877931, "find_vma" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xb285b8f8, "xen_in_preemptible_hcall" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3fa55769, "__put_page" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0x73fcaf03, "xen_xlate_remap_gfn_array" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D11A99D3D45E2D9A241D029");
