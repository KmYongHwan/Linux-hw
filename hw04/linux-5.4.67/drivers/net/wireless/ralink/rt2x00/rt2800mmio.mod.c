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
	{ 0x4dae8fd2, "rt2800_disable_wpdma" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa8316c5, "rt2x00lib_beacondone" },
	{ 0x5a5d89a1, "rt2800_txdone" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x8146b741, "rt2800_config" },
	{ 0x8622bd33, "rt2800_get_txwi_rxwi_size" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xcbb48c87, "rt2x00lib_pretbtt" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x17147790, "rt2800_wait_wpdma_ready" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfbbcaa3a, "rt2800_process_rxwi" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd556a472, "rt2800_txdone_nostatus" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac5abe29, "rt2800_probe_hw" },
	{ 0x2d82ed43, "rt2800_txstatus_timeout" },
	{ 0x26b2e2b2, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9243512e, "rt2x00mmio_rxdone" },
	{ 0x553ce56f, "rt2800_txstatus_pending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x591ff132, "rt2800_enable_radio" },
};

MODULE_INFO(depends, "rt2800lib,rt2x00lib,rt2x00mmio");


MODULE_INFO(srcversion, "430155D20F4C0B7023DE2F7");
