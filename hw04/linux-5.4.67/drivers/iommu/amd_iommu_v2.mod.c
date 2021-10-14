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
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xaf1e5e73, "amd_iommu_rlookup_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x58fbb03d, "amd_iommu_domain_clear_gcr3" },
	{ 0xeb9a5e50, "amd_iommu_domain_direct_map" },
	{ 0x77a6309, "iommu_attach_group" },
	{ 0x31a5c797, "amd_iommu_domain_enable_v2" },
	{ 0x95af08d, "translation_pre_enabled" },
	{ 0xfa09467, "mmu_notifier_register" },
	{ 0xc5161596, "amd_iommu_flush_page" },
	{ 0x7897e410, "mmput" },
	{ 0x668b19a1, "down_read" },
	{ 0x97f56d52, "amd_iommu_complete_ppr" },
	{ 0x2d4d0ccd, "amd_iommu_flush_tlb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x858ef8b8, "get_task_mm" },
	{ 0x9a9f0d52, "mmu_notifier_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x68afdd8f, "get_dev_data" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb921838, "iommu_domain_alloc" },
	{ 0xfc09c6c7, "iommu_domain_free" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6ea4a4, "amd_iommu_domain_set_gcr3" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xea9a7ef6, "iommu_detach_group" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x561587b2, "handle_mm_fault" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x76fb08a7, "amd_iommu_unregister_ppr_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x48d50e79, "amd_iommu_register_ppr_notifier" },
	{ 0xafd5ff2c, "amd_iommu_v2_supported" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb9e7f6f2, "iommu_group_get" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf59d9ed6, "find_extend_vma" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1906A5C52DCF581CF8686B3");
